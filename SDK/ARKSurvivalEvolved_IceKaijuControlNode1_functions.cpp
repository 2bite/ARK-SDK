// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceKaijuControlNode1_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IceKaijuControlNode1.IceKaijuControlNode1_C.UserConstructionScript
// ()

void AIceKaijuControlNode1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaijuControlNode1.IceKaijuControlNode1_C.UserConstructionScript");

	AIceKaijuControlNode1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaijuControlNode1.IceKaijuControlNode1_C.ExecuteUbergraph_IceKaijuControlNode1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaijuControlNode1_C::ExecuteUbergraph_IceKaijuControlNode1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaijuControlNode1.IceKaijuControlNode1_C.ExecuteUbergraph_IceKaijuControlNode1");

	AIceKaijuControlNode1_C_ExecuteUbergraph_IceKaijuControlNode1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
