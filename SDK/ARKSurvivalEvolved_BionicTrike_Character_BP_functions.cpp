// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BionicTrike_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicTrike_Character_BP.BionicTrike_Character_BP_C.UserConstructionScript
// ()

void ABionicTrike_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicTrike_Character_BP.BionicTrike_Character_BP_C.UserConstructionScript");

	ABionicTrike_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicTrike_Character_BP.BionicTrike_Character_BP_C.ExecuteUbergraph_BionicTrike_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicTrike_Character_BP_C::ExecuteUbergraph_BionicTrike_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicTrike_Character_BP.BionicTrike_Character_BP_C.ExecuteUbergraph_BionicTrike_Character_BP");

	ABionicTrike_Character_BP_C_ExecuteUbergraph_BionicTrike_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
