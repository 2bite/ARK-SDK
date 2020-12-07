// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalBuffPersistentData_Impregnate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalBuffPersistentData_Impregnate.PrimalBuffPersistentData_Impregnate_C.ExecuteUbergraph_PrimalBuffPersistentData_Impregnate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalBuffPersistentData_Impregnate_C::ExecuteUbergraph_PrimalBuffPersistentData_Impregnate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalBuffPersistentData_Impregnate.PrimalBuffPersistentData_Impregnate_C.ExecuteUbergraph_PrimalBuffPersistentData_Impregnate");

	UPrimalBuffPersistentData_Impregnate_C_ExecuteUbergraph_PrimalBuffPersistentData_Impregnate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
