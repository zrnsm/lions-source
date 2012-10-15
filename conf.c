int     (*bdevsw[])()
{
        &nulldev,       &nulldev,       &rkstrategy,    &rktab, /* rk */
        &nodev,         &nodev,         &nodev,         0,      /* rp */
        &nodev,         &nodev,         &nodev,         0,      /* rf */
        &nodev,         &nodev,         &nodev,         0,      /* tm */
        &nodev,         &nodev,         &nodev,         0,      /* tc */
        &nodev,         &nodev,         &nodev,         0,      /* hs */
        &nodev,         &nodev,         &nodev,         0,      /* hp */
        &nodev,         &nodev,         &nodev,         0,      /* ht */
        0
};

int     (*cdevsw[])()
{
        &klopen,   &klclose,  &klread,   &klwrite,  &klsgtty,   /* console */

        &pcopen,   &pcclose,  &pcread,   &pcwrite,  &nodev,     /* pc */

        &lpopen,   &lpclose,  &lpread,   &lpwrite,  &nodev,     /* lp */

        &nodev,    &nodev,    &nodev,    &nodev,    &nodev,     /* dc */
        &nodev,    &nodev,    &nodev,    &nodev,    &nodev,     /* dh */
        &nodev,    &nodev,    &nodev,    &nodev,    &nodev,     /* dp */
        &nodev,    &nodev,    &nodev,    &nodev,    &nodev,     /* dj */
        &nodev,    &nodev,    &nodev,    &nodev,    &nodev,     /* dn */
        &nulldev,  &nulldev,  &mmread,   &mmwrite,  &nodev,     /* mem */

        &nulldev,  &nulldev,  &rkread,   &rkwrite,  &nodev,     /* rk */

        &nodev,    &nodev,    &nodev,    &nodev,    &nodev,     /* rf */
        &nodev,    &nodev,    &nodev,    &nodev,    &nodev,     /* rp */
        &nodev,    &nodev,    &nodev,    &nodev,    &nodev,     /* tm */
        &nodev,    &nodev,    &nodev,    &nodev,    &nodev,     /* hs */
        &nodev,    &nodev,    &nodev,    &nodev,    &nodev,     /* hp */
        &nodev,    &nodev,    &nodev,    &nodev,    &nodev,     /* ht */
        0
};

int     rootdev {(0<<8)|0};
int     swapdev {(0<<8)|0};
int     swplo   4000;   /* cannot be zero */
int     nswap   872;
