// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GateFrame_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GateFrame_Stone.GateFrame_Stone_C.UserConstructionScript
// ()

void AGateFrame_Stone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GateFrame_Stone.GateFrame_Stone_C.UserConstructionScript");

	AGateFrame_Stone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GateFrame_Stone.GateFrame_Stone_C.ExecuteUbergraph_GateFrame_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGateFrame_Stone_C::ExecuteUbergraph_GateFrame_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GateFrame_Stone.GateFrame_Stone_C.ExecuteUbergraph_GateFrame_Stone");

	AGateFrame_Stone_C_ExecuteUbergraph_GateFrame_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
