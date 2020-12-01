// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_QueenBee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_QueenBee.DinoTamedInventoryComponent_QueenBee_C.ExecuteUbergraph_DinoTamedInventoryComponent_QueenBee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_QueenBee_C::ExecuteUbergraph_DinoTamedInventoryComponent_QueenBee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_QueenBee.DinoTamedInventoryComponent_QueenBee_C.ExecuteUbergraph_DinoTamedInventoryComponent_QueenBee");

	UDinoTamedInventoryComponent_QueenBee_C_ExecuteUbergraph_DinoTamedInventoryComponent_QueenBee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
