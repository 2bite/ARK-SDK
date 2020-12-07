// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AlarmTrap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AlarmTrap.EngramEntry_AlarmTrap_C.ExecuteUbergraph_EngramEntry_AlarmTrap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AlarmTrap_C::ExecuteUbergraph_EngramEntry_AlarmTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AlarmTrap.EngramEntry_AlarmTrap_C.ExecuteUbergraph_EngramEntry_AlarmTrap");

	UEngramEntry_AlarmTrap_C_ExecuteUbergraph_EngramEntry_AlarmTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
