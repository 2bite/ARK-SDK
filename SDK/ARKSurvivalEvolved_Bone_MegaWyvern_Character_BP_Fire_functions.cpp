// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bone_MegaWyvern_Character_BP_Fire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bone_MegaWyvern_Character_BP_Fire.Bone_MegaWyvern_Character_BP_Fire_C.UserConstructionScript
// ()

void ABone_MegaWyvern_Character_BP_Fire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bone_MegaWyvern_Character_BP_Fire.Bone_MegaWyvern_Character_BP_Fire_C.UserConstructionScript");

	ABone_MegaWyvern_Character_BP_Fire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bone_MegaWyvern_Character_BP_Fire.Bone_MegaWyvern_Character_BP_Fire_C.ExecuteUbergraph_Bone_MegaWyvern_Character_BP_Fire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABone_MegaWyvern_Character_BP_Fire_C::ExecuteUbergraph_Bone_MegaWyvern_Character_BP_Fire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bone_MegaWyvern_Character_BP_Fire.Bone_MegaWyvern_Character_BP_Fire_C.ExecuteUbergraph_Bone_MegaWyvern_Character_BP_Fire");

	ABone_MegaWyvern_Character_BP_Fire_C_ExecuteUbergraph_Bone_MegaWyvern_Character_BP_Fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
