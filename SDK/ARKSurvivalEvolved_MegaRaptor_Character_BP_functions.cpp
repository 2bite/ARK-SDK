// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegaRaptor_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MegaRaptor_Character_BP.MegaRaptor_Character_BP_C.UserConstructionScript
// ()

void AMegaRaptor_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaRaptor_Character_BP.MegaRaptor_Character_BP_C.UserConstructionScript");

	AMegaRaptor_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaRaptor_Character_BP.MegaRaptor_Character_BP_C.ExecuteUbergraph_MegaRaptor_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegaRaptor_Character_BP_C::ExecuteUbergraph_MegaRaptor_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaRaptor_Character_BP.MegaRaptor_Character_BP_C.ExecuteUbergraph_MegaRaptor_Character_BP");

	AMegaRaptor_Character_BP_C_ExecuteUbergraph_MegaRaptor_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
