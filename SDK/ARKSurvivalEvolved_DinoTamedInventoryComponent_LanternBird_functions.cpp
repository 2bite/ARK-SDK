// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_LanternBird_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_LanternBird.DinoTamedInventoryComponent_LanternBird_C.ExecuteUbergraph_DinoTamedInventoryComponent_LanternBird
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_LanternBird_C::ExecuteUbergraph_DinoTamedInventoryComponent_LanternBird(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_LanternBird.DinoTamedInventoryComponent_LanternBird_C.ExecuteUbergraph_DinoTamedInventoryComponent_LanternBird");

	UDinoTamedInventoryComponent_LanternBird_C_ExecuteUbergraph_DinoTamedInventoryComponent_LanternBird_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
