// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TPV_MagnifyingGlass_MaleAnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TPV_MagnifyingGlass_MaleAnimBP.TPV_MagnifyingGlass_MaleAnimBP_C.ExecuteUbergraph_TPV_MagnifyingGlass_MaleAnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTPV_MagnifyingGlass_MaleAnimBP_C::ExecuteUbergraph_TPV_MagnifyingGlass_MaleAnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPV_MagnifyingGlass_MaleAnimBP.TPV_MagnifyingGlass_MaleAnimBP_C.ExecuteUbergraph_TPV_MagnifyingGlass_MaleAnimBP");

	UTPV_MagnifyingGlass_MaleAnimBP_C_ExecuteUbergraph_TPV_MagnifyingGlass_MaleAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
