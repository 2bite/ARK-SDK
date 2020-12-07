// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CORE_PrimalGameData_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CORE_PrimalGameData.CORE_PrimalGameData_C.ExecuteUbergraph_CORE_PrimalGameData
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCORE_PrimalGameData_C::ExecuteUbergraph_CORE_PrimalGameData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CORE_PrimalGameData.CORE_PrimalGameData_C.ExecuteUbergraph_CORE_PrimalGameData");

	UCORE_PrimalGameData_C_ExecuteUbergraph_CORE_PrimalGameData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
