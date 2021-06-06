// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Stego_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Stego_AIController_BP.Stego_AIController_BP_C.UserConstructionScript
// ()

void AStego_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_AIController_BP.Stego_AIController_BP_C.UserConstructionScript");

	AStego_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_AIController_BP.Stego_AIController_BP_C.ExecuteUbergraph_Stego_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStego_AIController_BP_C::ExecuteUbergraph_Stego_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_AIController_BP.Stego_AIController_BP_C.ExecuteUbergraph_Stego_AIController_BP");

	AStego_AIController_BP_C_ExecuteUbergraph_Stego_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
