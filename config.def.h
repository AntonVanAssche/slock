/* user and group to drop privileges to */
static const char *user  = "anton";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#202020",     /* after initialization */
	[INPUT] =  "#61AFEF",   /* during input */
	[FAILED] = "#E06C75",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* Background image path, should be available to the user above */
static const char* background_image = "/home/anton/Pictures/Wallpapers/Tate-McRae.jpg";

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 5;

