// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GateFrame_Wood_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GateFrame_Wood_SM.GateFrame_Wood_SM_C.UserConstructionScript
// ()

void AGateFrame_Wood_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GateFrame_Wood_SM.GateFrame_Wood_SM_C.UserConstructionScript");

	AGateFrame_Wood_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GateFrame_Wood_SM.GateFrame_Wood_SM_C.ExecuteUbergraph_GateFrame_Wood_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGateFrame_Wood_SM_C::ExecuteUbergraph_GateFrame_Wood_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GateFrame_Wood_SM.GateFrame_Wood_SM_C.ExecuteUbergraph_GateFrame_Wood_SM");

	AGateFrame_Wood_SM_C_ExecuteUbergraph_GateFrame_Wood_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
