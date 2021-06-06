// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BionicStego_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicStego_Character_BP.BionicStego_Character_BP_C.UserConstructionScript
// ()

void ABionicStego_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicStego_Character_BP.BionicStego_Character_BP_C.UserConstructionScript");

	ABionicStego_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicStego_Character_BP.BionicStego_Character_BP_C.ExecuteUbergraph_BionicStego_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicStego_Character_BP_C::ExecuteUbergraph_BionicStego_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicStego_Character_BP.BionicStego_Character_BP_C.ExecuteUbergraph_BionicStego_Character_BP");

	ABionicStego_Character_BP_C_ExecuteUbergraph_BionicStego_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
