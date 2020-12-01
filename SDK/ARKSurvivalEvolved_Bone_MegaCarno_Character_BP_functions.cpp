// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bone_MegaCarno_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bone_MegaCarno_Character_BP.Bone_MegaCarno_Character_BP_C.UserConstructionScript
// ()

void ABone_MegaCarno_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bone_MegaCarno_Character_BP.Bone_MegaCarno_Character_BP_C.UserConstructionScript");

	ABone_MegaCarno_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bone_MegaCarno_Character_BP.Bone_MegaCarno_Character_BP_C.ExecuteUbergraph_Bone_MegaCarno_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABone_MegaCarno_Character_BP_C::ExecuteUbergraph_Bone_MegaCarno_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bone_MegaCarno_Character_BP.Bone_MegaCarno_Character_BP_C.ExecuteUbergraph_Bone_MegaCarno_Character_BP");

	ABone_MegaCarno_Character_BP_C_ExecuteUbergraph_Bone_MegaCarno_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
