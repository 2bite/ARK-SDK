// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ElectricProd_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ElectricProd.EngramEntry_ElectricProd_C.ExecuteUbergraph_EngramEntry_ElectricProd
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ElectricProd_C::ExecuteUbergraph_EngramEntry_ElectricProd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ElectricProd.EngramEntry_ElectricProd_C.ExecuteUbergraph_EngramEntry_ElectricProd");

	UEngramEntry_ElectricProd_C_ExecuteUbergraph_EngramEntry_ElectricProd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
