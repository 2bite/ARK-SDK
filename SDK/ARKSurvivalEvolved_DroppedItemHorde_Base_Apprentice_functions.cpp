// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemHorde_Base_Apprentice_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItemHorde_Base_Apprentice.DroppedItemHorde_Base_Apprentice_C.UserConstructionScript
// ()

void ADroppedItemHorde_Base_Apprentice_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemHorde_Base_Apprentice.DroppedItemHorde_Base_Apprentice_C.UserConstructionScript");

	ADroppedItemHorde_Base_Apprentice_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemHorde_Base_Apprentice.DroppedItemHorde_Base_Apprentice_C.ExecuteUbergraph_DroppedItemHorde_Base_Apprentice
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemHorde_Base_Apprentice_C::ExecuteUbergraph_DroppedItemHorde_Base_Apprentice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemHorde_Base_Apprentice.DroppedItemHorde_Base_Apprentice_C.ExecuteUbergraph_DroppedItemHorde_Base_Apprentice");

	ADroppedItemHorde_Base_Apprentice_C_ExecuteUbergraph_DroppedItemHorde_Base_Apprentice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif