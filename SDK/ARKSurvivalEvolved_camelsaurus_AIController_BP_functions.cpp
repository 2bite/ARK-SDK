// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_camelsaurus_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function camelsaurus_AIController_BP.camelsaurus_AIController_BP_C.UserConstructionScript
// ()

void Acamelsaurus_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_AIController_BP.camelsaurus_AIController_BP_C.UserConstructionScript");

	Acamelsaurus_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function camelsaurus_AIController_BP.camelsaurus_AIController_BP_C.ExecuteUbergraph_camelsaurus_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Acamelsaurus_AIController_BP_C::ExecuteUbergraph_camelsaurus_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_AIController_BP.camelsaurus_AIController_BP_C.ExecuteUbergraph_camelsaurus_AIController_BP");

	Acamelsaurus_AIController_BP_C_ExecuteUbergraph_camelsaurus_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
