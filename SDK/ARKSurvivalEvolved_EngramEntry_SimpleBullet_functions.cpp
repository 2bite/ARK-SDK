// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_SimpleBullet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_SimpleBullet.EngramEntry_SimpleBullet_C.ExecuteUbergraph_EngramEntry_SimpleBullet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_SimpleBullet_C::ExecuteUbergraph_EngramEntry_SimpleBullet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_SimpleBullet.EngramEntry_SimpleBullet_C.ExecuteUbergraph_EngramEntry_SimpleBullet");

	UEngramEntry_SimpleBullet_C_ExecuteUbergraph_EngramEntry_SimpleBullet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
