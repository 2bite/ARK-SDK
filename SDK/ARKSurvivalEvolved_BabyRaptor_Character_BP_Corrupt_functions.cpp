// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BabyRaptor_Character_BP_Corrupt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BabyRaptor_Character_BP_Corrupt.BabyRaptor_Character_BP_Corrupt_C.UserConstructionScript
// ()

void ABabyRaptor_Character_BP_Corrupt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BabyRaptor_Character_BP_Corrupt.BabyRaptor_Character_BP_Corrupt_C.UserConstructionScript");

	ABabyRaptor_Character_BP_Corrupt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BabyRaptor_Character_BP_Corrupt.BabyRaptor_Character_BP_Corrupt_C.ExecuteUbergraph_BabyRaptor_Character_BP_Corrupt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABabyRaptor_Character_BP_Corrupt_C::ExecuteUbergraph_BabyRaptor_Character_BP_Corrupt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BabyRaptor_Character_BP_Corrupt.BabyRaptor_Character_BP_Corrupt_C.ExecuteUbergraph_BabyRaptor_Character_BP_Corrupt");

	ABabyRaptor_Character_BP_Corrupt_C_ExecuteUbergraph_BabyRaptor_Character_BP_Corrupt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
