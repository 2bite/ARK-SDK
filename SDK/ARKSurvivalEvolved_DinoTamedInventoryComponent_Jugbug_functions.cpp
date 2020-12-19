// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Jugbug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Jugbug.DinoTamedInventoryComponent_Jugbug_C.ExecuteUbergraph_DinoTamedInventoryComponent_Jugbug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Jugbug_C::ExecuteUbergraph_DinoTamedInventoryComponent_Jugbug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Jugbug.DinoTamedInventoryComponent_Jugbug_C.ExecuteUbergraph_DinoTamedInventoryComponent_Jugbug");

	UDinoTamedInventoryComponent_Jugbug_C_ExecuteUbergraph_DinoTamedInventoryComponent_Jugbug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
