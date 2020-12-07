// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GateFrame_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GateFrame_Metal.GateFrame_Metal_C.UserConstructionScript
// ()

void AGateFrame_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GateFrame_Metal.GateFrame_Metal_C.UserConstructionScript");

	AGateFrame_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GateFrame_Metal.GateFrame_Metal_C.ExecuteUbergraph_GateFrame_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGateFrame_Metal_C::ExecuteUbergraph_GateFrame_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GateFrame_Metal.GateFrame_Metal_C.ExecuteUbergraph_GateFrame_Metal");

	AGateFrame_Metal_C_ExecuteUbergraph_GateFrame_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
