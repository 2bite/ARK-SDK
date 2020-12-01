// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TurretTek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TurretTek.EngramEntry_TurretTek_C.ExecuteUbergraph_EngramEntry_TurretTek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TurretTek_C::ExecuteUbergraph_EngramEntry_TurretTek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TurretTek.EngramEntry_TurretTek_C.ExecuteUbergraph_EngramEntry_TurretTek");

	UEngramEntry_TurretTek_C_ExecuteUbergraph_EngramEntry_TurretTek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
