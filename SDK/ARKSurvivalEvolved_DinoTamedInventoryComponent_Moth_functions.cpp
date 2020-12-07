// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Moth_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Moth.DinoTamedInventoryComponent_Moth_C.ExecuteUbergraph_DinoTamedInventoryComponent_Moth
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Moth_C::ExecuteUbergraph_DinoTamedInventoryComponent_Moth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Moth.DinoTamedInventoryComponent_Moth_C.ExecuteUbergraph_DinoTamedInventoryComponent_Moth");

	UDinoTamedInventoryComponent_Moth_C_ExecuteUbergraph_DinoTamedInventoryComponent_Moth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
