#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GetClosestTree_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GetClosestTree.GetClosestTree_C.GetClosestTree
struct UGetClosestTree_C_GetClosestTree_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPrev;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        treeComp;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GetClosestTree.GetClosestTree_C.GetPointOnTreeSurface
struct UGetClosestTree_C_GetPointOnTreeSurface_Params
{
	class UPrimitiveComponent*                         treeComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     origPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GetClosestTree.GetClosestTree_C.ReceiveExecute
struct UGetClosestTree_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GetClosestTree.GetClosestTree_C.ExecuteUbergraph_GetClosestTree
struct UGetClosestTree_C_ExecuteUbergraph_GetClosestTree_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
