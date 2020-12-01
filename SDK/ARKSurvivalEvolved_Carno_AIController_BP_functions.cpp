// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Carno_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Carno_AIController_BP.Carno_AIController_BP_C.UserConstructionScript
// ()

void ACarno_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Carno_AIController_BP.Carno_AIController_BP_C.UserConstructionScript");

	ACarno_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Carno_AIController_BP.Carno_AIController_BP_C.ExecuteUbergraph_Carno_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACarno_AIController_BP_C::ExecuteUbergraph_Carno_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Carno_AIController_BP.Carno_AIController_BP_C.ExecuteUbergraph_Carno_AIController_BP");

	ACarno_AIController_BP_C_ExecuteUbergraph_Carno_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
