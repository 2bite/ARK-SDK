// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dimetro_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dimetro_Character_BP.Dimetro_Character_BP_C.UserConstructionScript
// ()

void ADimetro_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dimetro_Character_BP.Dimetro_Character_BP_C.UserConstructionScript");

	ADimetro_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dimetro_Character_BP.Dimetro_Character_BP_C.ExecuteUbergraph_Dimetro_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADimetro_Character_BP_C::ExecuteUbergraph_Dimetro_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dimetro_Character_BP.Dimetro_Character_BP_C.ExecuteUbergraph_Dimetro_Character_BP");

	ADimetro_Character_BP_C_ExecuteUbergraph_Dimetro_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
