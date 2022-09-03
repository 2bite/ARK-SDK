// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Paracer_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Paracer_Character_BP.Paracer_Character_BP_C.UserConstructionScript
// ()

void AParacer_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paracer_Character_BP.Paracer_Character_BP_C.UserConstructionScript");

	AParacer_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paracer_Character_BP.Paracer_Character_BP_C.ExecuteUbergraph_Paracer_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AParacer_Character_BP_C::ExecuteUbergraph_Paracer_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paracer_Character_BP.Paracer_Character_BP_C.ExecuteUbergraph_Paracer_Character_BP");

	AParacer_Character_BP_C_ExecuteUbergraph_Paracer_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
