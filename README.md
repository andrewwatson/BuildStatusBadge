# Builder Badge

This Particle Electron firmware displays either a solid color or an animated sequence to indicate the status
of a project in CircleCI.

## Usage

### Setup

Change the Device ID at the top of Makefile first.  Install the particle cli and login to your particle account
to set this up.

### Animated "building" sequence looks like a game from the 90s.  Loops continuously.

```
  make building
```

### Solid Colors

Failed Build

```
  make red
```

Successful Build
```
  make green
```

Queued Build
```
  make blue
```

### Switch "OFF"
```
  make black
```
