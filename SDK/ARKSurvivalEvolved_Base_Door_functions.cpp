// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Door_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Base_Door.Base_Door_C.UserConstructionScript
// ()

void ABase_Door_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Door.Base_Door_C.UserConstructionScript");

	ABase_Door_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Door.Base_Door_C.ExecuteUbergraph_Base_Door
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABase_Door_C::ExecuteUbergraph_Base_Door(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Door.Base_Door_C.ExecuteUbergraph_Base_Door");

	ABase_Door_C_ExecuteUbergraph_Base_Door_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
