// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Beaver_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Beaver.DinoTamedInventoryComponent_Beaver_C.ExecuteUbergraph_DinoTamedInventoryComponent_Beaver
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Beaver_C::ExecuteUbergraph_DinoTamedInventoryComponent_Beaver(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beaver.DinoTamedInventoryComponent_Beaver_C.ExecuteUbergraph_DinoTamedInventoryComponent_Beaver");

	UDinoTamedInventoryComponent_Beaver_C_ExecuteUbergraph_DinoTamedInventoryComponent_Beaver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
