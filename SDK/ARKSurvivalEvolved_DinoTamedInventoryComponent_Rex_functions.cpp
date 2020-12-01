// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Rex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Rex.DinoTamedInventoryComponent_Rex_C.ExecuteUbergraph_DinoTamedInventoryComponent_Rex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Rex_C::ExecuteUbergraph_DinoTamedInventoryComponent_Rex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Rex.DinoTamedInventoryComponent_Rex_C.ExecuteUbergraph_DinoTamedInventoryComponent_Rex");

	UDinoTamedInventoryComponent_Rex_C_ExecuteUbergraph_DinoTamedInventoryComponent_Rex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
