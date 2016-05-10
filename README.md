# ObjAnim - A language for animation construction and rendering

ObjAnim offers a simple abstraction to easily create animations with OBJ model files. With a few lines of code, you can compile it and generate a executable that will run the written animation flow.

## Install
ObjAnim depends on specific libraries to compile the final executable. Some of them are:

### Dependencies
- SDL
- GLEW
- GLU
- GLUT
- [tinyobjloader](https://github.com/syoyo/tinyobjloader)

## Usage

### Loading primitives
Available primitives:
**cube, cone, cylinder, sphere, torus, plane, floor, wall, monkey**.
```
Syntax:
load_primitive PRIMITIVE NAME;

load_primitive cube box;
load_primitive monkey animal;
````

### Loading models
```
Syntax:
load_model PATH NAME;

load_model "models/person.obj" person;
```

### Adding cameras
```
Syntax:
camera NAME
{
    position: X Y Z;
    direction: X Y Z;
    depth: D;
}

camera default
{
    position: 0 0 -2;
    direction: 0 0 1;
    depth: 1000;
}

camera side_camera
{
    position: 5 0 -2;
    direction: -3 0 1;
    depth: 1000;
}
```

### Setting the default camera
The animation will start with the default camera, if no default camera is setted, the animation will remain blank until some camera joins the timeline.
```
Syntax:
set_default_camera CAMERA_NAME;

set_default_camera default;
```

### Animating
Available actions: **translate, scale, rotate**.
```
Syntax:
animation NAME
{
    ACTION MODEL X Y Z;
}

animation start_position
{
    translate box 0 1.6 7.2;
    translate animal 5 5 5;
    
    scale box 2 2 2;
    scale animal 3 3 3;
    
    rotate animal 2 1 -1;
}
```

### Interpolating animations
```
Syntax:
animation NAME
{
    interpolate SECONDS
    {
        ACTION MODEL X Y Z;
    }
}

animation dancing_box
{
    interpolate 10
    {
        rotate box 0 1000 1000;
    }
    
    interpolate 10
    {
        rotate box 0 -1000 -1000;
    }
}

animation move_animal
{
    interpolate 20
    {
        translate animal 12 1.6 7.2;
    }
}
```

### Adding animations and cameras to the timeline
Since you have all animations and cameras setted, you'll add them to a timeline.
The timeline will receive the structure you want to add and the time it will start.
```
Syntax:
add_to_timeline STRUCTURE TIME;

add_to_timeline start_position 0;
add_to_timeline dancing_box 5;
add_to_timeline move_animal 4;
add_to_timeline side_camera 2;
```

## License
ObjAnim is licensed under the MIT License.
