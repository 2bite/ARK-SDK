// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_MilkGlider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_MilkGlider.DinoTamedInventoryComponent_MilkGlider_C.ExecuteUbergraph_DinoTamedInventoryComponent_MilkGlider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_MilkGlider_C::ExecuteUbergraph_DinoTamedInventoryComponent_MilkGlider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_MilkGlider.DinoTamedInventoryComponent_MilkGlider_C.ExecuteUbergraph_DinoTamedInventoryComponent_MilkGlider");

	UDinoTamedInventoryComponent_MilkGlider_C_ExecuteUbergraph_DinoTamedInventoryComponent_MilkGlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
