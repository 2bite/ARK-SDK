// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Boa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Boa.DinoTamedInventoryComponent_Boa_C.ExecuteUbergraph_DinoTamedInventoryComponent_Boa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Boa_C::ExecuteUbergraph_DinoTamedInventoryComponent_Boa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Boa.DinoTamedInventoryComponent_Boa_C.ExecuteUbergraph_DinoTamedInventoryComponent_Boa");

	UDinoTamedInventoryComponent_Boa_C_ExecuteUbergraph_DinoTamedInventoryComponent_Boa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
