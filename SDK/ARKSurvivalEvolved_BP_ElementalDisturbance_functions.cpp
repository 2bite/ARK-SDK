// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_ElementalDisturbance_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ElementalDisturbance.BP_ElementalDisturbance_C.UserConstructionScript
// (NetReliable, Native, Event, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, NetValidate)

void ABP_ElementalDisturbance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElementalDisturbance.BP_ElementalDisturbance_C.UserConstructionScript");

	ABP_ElementalDisturbance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ElementalDisturbance.BP_ElementalDisturbance_C.ReceiveBeginPlay
// ()

void ABP_ElementalDisturbance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElementalDisturbance.BP_ElementalDisturbance_C.ReceiveBeginPlay");

	ABP_ElementalDisturbance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ElementalDisturbance.BP_ElementalDisturbance_C.checkEnablers
// ()

void ABP_ElementalDisturbance_C::checkEnablers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElementalDisturbance.BP_ElementalDisturbance_C.checkEnablers");

	ABP_ElementalDisturbance_C_checkEnablers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ElementalDisturbance.BP_ElementalDisturbance_C.ExecuteUbergraph_BP_ElementalDisturbance
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ElementalDisturbance_C::ExecuteUbergraph_BP_ElementalDisturbance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElementalDisturbance.BP_ElementalDisturbance_C.ExecuteUbergraph_BP_ElementalDisturbance");

	ABP_ElementalDisturbance_C_ExecuteUbergraph_BP_ElementalDisturbance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
