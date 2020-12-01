// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Coel_Character_BP_Ocean_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Coel_Character_BP_Ocean.Coel_Character_BP_Ocean_C.UserConstructionScript
// ()

void ACoel_Character_BP_Ocean_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Coel_Character_BP_Ocean.Coel_Character_BP_Ocean_C.UserConstructionScript");

	ACoel_Character_BP_Ocean_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Coel_Character_BP_Ocean.Coel_Character_BP_Ocean_C.ExecuteUbergraph_Coel_Character_BP_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACoel_Character_BP_Ocean_C::ExecuteUbergraph_Coel_Character_BP_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Coel_Character_BP_Ocean.Coel_Character_BP_Ocean_C.ExecuteUbergraph_Coel_Character_BP_Ocean");

	ACoel_Character_BP_Ocean_C_ExecuteUbergraph_Coel_Character_BP_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
