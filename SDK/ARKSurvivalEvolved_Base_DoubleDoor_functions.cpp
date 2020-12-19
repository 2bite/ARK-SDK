// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_DoubleDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Base_DoubleDoor.Base_DoubleDoor_C.UserConstructionScript
// ()

void ABase_DoubleDoor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_DoubleDoor.Base_DoubleDoor_C.UserConstructionScript");

	ABase_DoubleDoor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_DoubleDoor.Base_DoubleDoor_C.ExecuteUbergraph_Base_DoubleDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABase_DoubleDoor_C::ExecuteUbergraph_Base_DoubleDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_DoubleDoor.Base_DoubleDoor_C.ExecuteUbergraph_Base_DoubleDoor");

	ABase_DoubleDoor_C_ExecuteUbergraph_Base_DoubleDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
