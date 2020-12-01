// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Stag_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Stag.DinoTamedInventoryComponent_Stag_C.ExecuteUbergraph_DinoTamedInventoryComponent_Stag
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Stag_C::ExecuteUbergraph_DinoTamedInventoryComponent_Stag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Stag.DinoTamedInventoryComponent_Stag_C.ExecuteUbergraph_DinoTamedInventoryComponent_Stag");

	UDinoTamedInventoryComponent_Stag_C_ExecuteUbergraph_DinoTamedInventoryComponent_Stag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
