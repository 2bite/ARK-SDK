// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateAoEFlee_Para_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.Should Frighten Character
// ()
// Parameters:
// class APrimalCharacter**       Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldFrighten                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateAoEFlee_Para_C::Should_Frighten_Character(class APrimalCharacter** Character, bool* ShouldFrighten)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.Should Frighten Character");

	UDinoAttackStateAoEFlee_Para_C_Should_Frighten_Character_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldFrighten != nullptr)
		*ShouldFrighten = params.ShouldFrighten;
}


// Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.Get Octree Group
// ()
// Parameters:
// TEnumAsByte<EServerOctreeGroup> OctreeGroup                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateAoEFlee_Para_C::Get_Octree_Group(TEnumAsByte<EServerOctreeGroup>* OctreeGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.Get Octree Group");

	UDinoAttackStateAoEFlee_Para_C_Get_Octree_Group_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OctreeGroup != nullptr)
		*OctreeGroup = params.OctreeGroup;
}


// Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.ExecuteUbergraph_DinoAttackStateAoEFlee_Para
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateAoEFlee_Para_C::ExecuteUbergraph_DinoAttackStateAoEFlee_Para(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.ExecuteUbergraph_DinoAttackStateAoEFlee_Para");

	UDinoAttackStateAoEFlee_Para_C_ExecuteUbergraph_DinoAttackStateAoEFlee_Para_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
