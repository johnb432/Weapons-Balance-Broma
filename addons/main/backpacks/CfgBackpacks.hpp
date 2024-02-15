class Bag_Base;
class BRM_SqBackpack_Brown: Bag_Base {
    maximumLoad = 240;
};
class BRM_SqBpH_Green: BRM_SqBackpack_Brown {
    mass = 60;
    maximumLoad = 320;
};
class BRM_SqBpEXPLO_Green: BRM_SqBackpack_Brown {
    mass = 40;
    maximumLoad = 240;
};
class BRM_SqBpEXPLOH_Green: BRM_SqBackpack_Brown {
    mass = 60;
    maximumLoad = 320;
};
class BRM_LRRBP_Green: BRM_SqBackpack_Brown {
    mass = 60;
    maximumLoad = 320;
};
class BRM_SqBpH_Black: BRM_SqBpH_Green {
    mass = 60;
    maximumLoad = 320;
};

// TFAR Bags
class BRM_PatrolBPHLR_Green: BRM_SqBpH_Green {
    mass = 115;
    tf_range = 40000;
};
class BRM_PatrolBPHLR_Black: BRM_PatrolBPHLR_Green {
    tf_range = 40000;
};
class BRM_PatrolBPHLR_Brown: BRM_PatrolBPHLR_Green {
    tf_range = 40000;
};

class BRM_PatrolBPLR_Green: BRM_SqBackpack_Brown {
    mass = 95;
    tf_range = 40000;
};
class BRM_PatrolBPLR_Black: BRM_PatrolBPLR_Green {
    tf_range = 40000;
};
class BRM_PatrolBPLR_Brown: BRM_PatrolBPLR_Green {
    tf_range = 40000;
};
