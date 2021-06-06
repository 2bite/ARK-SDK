// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BionicRaptor_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicRaptor_Character_BP.BionicRaptor_Character_BP_C.UserConstructionScript
// ()

void ABionicRaptor_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRaptor_Character_BP.BionicRaptor_Character_BP_C.UserConstructionScript");

	ABionicRaptor_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicRaptor_Character_BP.BionicRaptor_Character_BP_C.ExecuteUbergraph_BionicRaptor_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicRaptor_Character_BP_C::ExecuteUbergraph_BionicRaptor_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRaptor_Character_BP.BionicRaptor_Character_BP_C.ExecuteUbergraph_BionicRaptor_Character_BP");

	ABionicRaptor_Character_BP_C_ExecuteUbergraph_BionicRaptor_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
