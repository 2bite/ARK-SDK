// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GateFrame_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GateFrame_Tek.GateFrame_Tek_C.BPAllowSnappingWith
// ()
// Parameters:
// class APrimalStructure**       OtherStructure                 (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGateFrame_Tek_C::BPAllowSnappingWith(class APrimalStructure** OtherStructure, class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GateFrame_Tek.GateFrame_Tek_C.BPAllowSnappingWith");

	AGateFrame_Tek_C_BPAllowSnappingWith_Params params;
	params.OtherStructure = OtherStructure;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GateFrame_Tek.GateFrame_Tek_C.UserConstructionScript
// ()

void AGateFrame_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GateFrame_Tek.GateFrame_Tek_C.UserConstructionScript");

	AGateFrame_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GateFrame_Tek.GateFrame_Tek_C.ExecuteUbergraph_GateFrame_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGateFrame_Tek_C::ExecuteUbergraph_GateFrame_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GateFrame_Tek.GateFrame_Tek_C.ExecuteUbergraph_GateFrame_Tek");

	AGateFrame_Tek_C_ExecuteUbergraph_GateFrame_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
