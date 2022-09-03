// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_DoubleDoorframe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Base_DoubleDoorframe.Base_DoubleDoorframe_C.UserConstructionScript
// ()

void ABase_DoubleDoorframe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_DoubleDoorframe.Base_DoubleDoorframe_C.UserConstructionScript");

	ABase_DoubleDoorframe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_DoubleDoorframe.Base_DoubleDoorframe_C.ExecuteUbergraph_Base_DoubleDoorframe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABase_DoubleDoorframe_C::ExecuteUbergraph_Base_DoubleDoorframe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_DoubleDoorframe.Base_DoubleDoorframe_C.ExecuteUbergraph_Base_DoubleDoorframe");

	ABase_DoubleDoorframe_C_ExecuteUbergraph_Base_DoubleDoorframe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
