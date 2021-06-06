// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_SimpleShotgunBullet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_SimpleShotgunBullet.EngramEntry_SimpleShotgunBullet_C.ExecuteUbergraph_EngramEntry_SimpleShotgunBullet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_SimpleShotgunBullet_C::ExecuteUbergraph_EngramEntry_SimpleShotgunBullet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_SimpleShotgunBullet.EngramEntry_SimpleShotgunBullet_C.ExecuteUbergraph_EngramEntry_SimpleShotgunBullet");

	UEngramEntry_SimpleShotgunBullet_C_ExecuteUbergraph_EngramEntry_SimpleShotgunBullet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
