// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Quetz_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Quetz.DinoTamedInventoryComponent_Quetz_C.ExecuteUbergraph_DinoTamedInventoryComponent_Quetz
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Quetz_C::ExecuteUbergraph_DinoTamedInventoryComponent_Quetz(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Quetz.DinoTamedInventoryComponent_Quetz_C.ExecuteUbergraph_DinoTamedInventoryComponent_Quetz");

	UDinoTamedInventoryComponent_Quetz_C_ExecuteUbergraph_DinoTamedInventoryComponent_Quetz_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
