#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateAoEFlee_Para_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.Should Frighten Character
struct UDinoAttackStateAoEFlee_Para_C_Should_Frighten_Character_Params
{
	class APrimalCharacter**                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldFrighten;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.Get Octree Group
struct UDinoAttackStateAoEFlee_Para_C_Get_Octree_Group_Params
{
	TEnumAsByte<EServerOctreeGroup>                    OctreeGroup;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.ExecuteUbergraph_DinoAttackStateAoEFlee_Para
struct UDinoAttackStateAoEFlee_Para_C_ExecuteUbergraph_DinoAttackStateAoEFlee_Para_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
