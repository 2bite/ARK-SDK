// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Direbear_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Direbear.DinoTamedInventoryComponent_Direbear_C.ExecuteUbergraph_DinoTamedInventoryComponent_Direbear
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Direbear_C::ExecuteUbergraph_DinoTamedInventoryComponent_Direbear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Direbear.DinoTamedInventoryComponent_Direbear_C.ExecuteUbergraph_DinoTamedInventoryComponent_Direbear");

	UDinoTamedInventoryComponent_Direbear_C_ExecuteUbergraph_DinoTamedInventoryComponent_Direbear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
