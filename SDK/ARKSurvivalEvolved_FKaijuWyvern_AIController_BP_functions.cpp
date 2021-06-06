// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FKaijuWyvern_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FKaijuWyvern_AIController_BP.FKaijuWyvern_AIController_BP_C.UserConstructionScript
// ()

void AFKaijuWyvern_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FKaijuWyvern_AIController_BP.FKaijuWyvern_AIController_BP_C.UserConstructionScript");

	AFKaijuWyvern_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FKaijuWyvern_AIController_BP.FKaijuWyvern_AIController_BP_C.ExecuteUbergraph_FKaijuWyvern_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFKaijuWyvern_AIController_BP_C::ExecuteUbergraph_FKaijuWyvern_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FKaijuWyvern_AIController_BP.FKaijuWyvern_AIController_BP_C.ExecuteUbergraph_FKaijuWyvern_AIController_BP");

	AFKaijuWyvern_AIController_BP_C_ExecuteUbergraph_FKaijuWyvern_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
