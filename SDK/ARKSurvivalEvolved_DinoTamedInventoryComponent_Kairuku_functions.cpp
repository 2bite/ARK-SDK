// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Kairuku_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Kairuku.DinoTamedInventoryComponent_Kairuku_C.ExecuteUbergraph_DinoTamedInventoryComponent_Kairuku
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Kairuku_C::ExecuteUbergraph_DinoTamedInventoryComponent_Kairuku(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Kairuku.DinoTamedInventoryComponent_Kairuku_C.ExecuteUbergraph_DinoTamedInventoryComponent_Kairuku");

	UDinoTamedInventoryComponent_Kairuku_C_ExecuteUbergraph_DinoTamedInventoryComponent_Kairuku_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
