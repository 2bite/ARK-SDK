#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FishingNetHelperFunction_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FishingNetHelperFunction.FishingNetHelperFunction_C.Stop Reeling
struct UFishingNetHelperFunction_C_Stop_Reeling_Params
{
	class UObject*                                     Fisher;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FishingNetHelperFunction.FishingNetHelperFunction_C.Cancel Cast
struct UFishingNetHelperFunction_C_Cancel_Cast_Params
{
	class UObject*                                     Projectile_Owner;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FishingNetHelperFunction.FishingNetHelperFunction_C.Caught Fish
struct UFishingNetHelperFunction_C_Caught_Fish_Params
{
	class UObject*                                     Projectile_Owner;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        Fish;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FishingNetHelperFunction.FishingNetHelperFunction_C.Pass Projectile Reference
struct UFishingNetHelperFunction_C_Pass_Projectile_Reference_Params
{
	class UObject*                                     Projectile_Owner;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterProjectile*                          Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FishingNetHelperFunction.FishingNetHelperFunction_C.reel
struct UFishingNetHelperFunction_C_reel_Params
{
	class UObject*                                     Fisher;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FishingNetHelperFunction.FishingNetHelperFunction_C.Update Rope
struct UFishingNetHelperFunction_C_Update_Rope_Params
{
	class AShooterProjectile*                          Net_Projectile;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Rope_Endpoint_Location;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FishingNetHelperFunction.FishingNetHelperFunction_C.Notify Net Collided With Water
struct UFishingNetHelperFunction_C_Notify_Net_Collided_With_Water_Params
{
	class UObject*                                     Projectile_Owner;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Water_Collide_Location;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Projectile_Rotation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FishingNetHelperFunction.FishingNetHelperFunction_C.ExecuteUbergraph_FishingNetHelperFunction
struct UFishingNetHelperFunction_C_ExecuteUbergraph_FishingNetHelperFunction_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
